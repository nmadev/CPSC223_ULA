#include <stdio.h>
#include <stdlib.h>

#include "movies.h"
#include "movie_theater.h"

char *get_list_of_movies();

int main(void) {
    int num_movies = 748;
    // list of movies
    char *movie_names[748] = {
    "Snow White and the Seven Dwarfs", 
    "Pinocchio", "Fantasia", 
    "The Reluctant Dragon", 
    "Dumbo", "Bambi", "Saludos Amigos", 
    "Victory Through Air Power", "The Three Caballeros", 
    "Make Mine Music", "Song of the South", 
    "Fun and Fancy Free", "Melody Time", 
    "So Dear to My Heart", 
    "The Adventures of Ichabod and Mr. Toad", "Cinderella", 
    "Treasure Island", "Alice in Wonderland", 
    "The Story of Robin Hood and His Merrie Men", "Peter Pan", "The Sword and the Rose", "The Living Desert", 
    "Rob Roy, the Highland Rogue", "The Vanishing Prairie", "20,000 Leagues Under the Sea", 
    "Davy Crockett, King of the Wild Frontier", "Lady and the Tramp", "The African Lion", "The Littlest Outlaw", 
    "The Great Locomotive Chase", "Davy Crockett and the River Pirates", "Secrets of Life", 
    "Westward Ho the Wagons!", "Johnny Tremain", "Perri", "Old Yeller", "The Light in the Forest", 
    "White Wilderness", "Tonka", "Sleeping Beauty", "The Shaggy Dog", "Darby OGill and the Little People", 
    "Third Man on the Mountain", "Toby Tyler, or Ten Weeks with a Circus", "Kidnapped", "Pollyanna", 
    "The Sign of Zorro", "Jungle Cat", "Ten Who Dared", "Swiss Family Robinson", "One Hundred and One Dalmatians", 
    "The Absent-Minded Professor", "The Parent Trap", "Nikki, Wild Dog of the North", "Greyfriars Bobby", 
    "Babes in Toyland", "Moon Pilot", "Bon Voyage", "Big Red", "Almost Angels", "The Legend of Lobo", 
    "In Search of the Castaways", "Son of Flubber", "Miracle of the White Stallions", "Savage Sam", "Summer Magic", 
    "The Incredible Journey", "The Sword in the Stone", "The Three Lives of Thomasina", 
    "The Misadventures of Merlin Jones", "A Tiger Walks", "The Moon-Spinners", "Mary Poppins", 
    "Emil and the Detectives", "Those Calloways", "The Monkeys Uncle", "That Darn Cat!", 
    "The Ugly Dachshund", "Lt. Robin Crusoe U.S.N.", "The Fighting Prince of Donegal", 
    "Follow Me, Boys!", "Monkeys, Go Home!", "The Adventures of Bullwhip Griffin", 
    "The Happiest Millionaire", "The Gnome-Mobile", "The Jungle Book", "Charlie, The Lonesome Cougar", 
    "Blackbeards Ghost", "The One and Only, Genuine, Original Family Band", "Never a Dull Moment", 
    "The Horse in the Gray Flannel Suit", "The Love Bug", "Smith!", "Rascal", "The Computer Wore Tennis Shoes", 
    "King of the Grizzlies", "The Boatniks", "The Aristocats", "The Wild Country", "The Barefoot Executive", 
    "Scandalous John", "The 1,000,000 Duck", "Bedknobs and Broomsticks", "The Biscuit Eater", 
    "Napoleon and Samantha", "Now You See Him, Now You Dont", "Run, Cougar, Run", "Snowball Express", 
    "The Worlds Greatest Athlete", "Charley and the Angel", "One Little Indian", "Robin Hood", "Superdad", 
    "Herbie Rides Again", "The Bears and I", "The Castaway Cowboy", "The Island at the Top of the World", 
    "The Strongest Man in the World", "Escape to Witch Mountain", "The Apple Dumpling Gang", 
    "One of Our Dinosaurs is Missing", "The Best of Walt Disneys True-Life Adventures", "Ride a Wild Pony", 
    "No Deposit, No Return", "Gus", "Treasure of Matecumbe", "The Shaggy D.A.", "Freaky Friday", 
    "The Littlest Horse Thieves", "The Many Adventures of Winnie the Pooh", "The Rescuers", 
    "Herbie Goes to Monte Carlo", "Petes Dragon", "Candleshoe", "Return from Witch Mountain", 
    "The Cat from Outer Space", "Hot Lead and Cold Feet", "The North Avenue Irregulars", 
    "The Apple Dumpling Gang Rides Again", "Unidentified Flying Oddball", "The Black Hole", "Midnight Madness", 
    "The Last Flight of Noahs Ark", "Herbie Goes Bananas", "The Devil and Max Devlin", "Amy", 
    "The Fox and the Hound", "Condorman", "The Watcher in the Woods", "Night Crossing", "Tron", "Tex", 
    "Trenchcoat", "Something Wicked This Way Comes", "Never Cry Wolf", "Splash", "Tiger Town", "Country", 
    "Baby... Secret of the Lost Legend", "Return to Oz", "The Black Cauldron", "My Science Project", 
    "The Journey of Natty Gann", "One Magic Christmas", "Down and Out in Beverly Hills", "166. 1886: Off Beat", 
    "Ruthless People", "The Great Mouse Detective", "Flight of the Navigator", "Tough Guys", "The Color of Money", 
    "Outrageous Fortune", "Tin Men", "Ernest Goes to Camp", "Benji the Hunted", "Adventures in Babysitting", 
    "Stakeout", "Cant Buy Me Love", "Hello Again", "Three Men and a Baby", "Good Morning, Vietnam", "Shoot to Kill", 
    "D.O.A.", "Return to Snowy River", "Big Business", "Who Framed Roger Rabbit", "Cocktail", "The Rescue", 
    "Heartbreak Hotel", "The Good Mother", "Ernest Saves Christmas", "Oliver & Company", "Beaches", 
    "Three Fugitives", "New York Stories", "Disorganized Crime", "Dead Poets Society", "Honey, I Shrunk the Kids", 
    "Turner & Hooch", "Cheetah", "An Innocent Man", "Gross Anatomy", "The Little Mermaid", "Blaze", "Stella", 
    "Where the Heart Is", "Pretty Woman", "Ernest Goes to Jail", "Spaced Invaders", "Fire Birds", "Dick Tracy", 
    "Betsys Wedding", "Arachnophobia", "Ducktales: the Movie, Treasure of the Lost Lamp", "Taking Care of Business", 
    "Mr. Destiny", "The Rescuers Down Under", "Three Men and a Little Lady", "Green Card", "White Fang", "Run", 
    "Scenes from a Mall", "Shipwrecked", "The Marrying Man", "Oscar", "One Good Cop", "What About Bob", 
    "Wild Hearts Cant Be Broken", "The Rocketeer", "The Doctor", "V. I. Warshawski", "True Identity", "Paradise", 
    "Deceived", "Ernest Scared Stupid", "Billy Bathgate", "Beauty and the Beast", "Father of the Bride", 
    "The Hand That Rocks the Cradle", "Medicine Man", "Blame It On The Bellboy", "Noises Off", "Straight Talk", 
    "Newsies", "Passed Away", "Encino Man", "Sister Act", "Honey, I Blew Up the Kid", "A Stranger Among Us", 
    "3 Ninjas", "The Gun in Betty Lous Handbag", "Crossing the Bridge", "Sarafina!", "Captain Ron", 
    "The Mighty Ducks", "Consenting Adults", "Aladdin", "The Distinguished Gentleman", "The Muppet Christmas Carol", 
    "Alive", "Aspen Extreme", "The Cemetery Club", "Homeward Bound: The Incredible Journey", "Swing Kids", 
    "A Far Off Place", "Born Yesterday", "Adventures of Huck Finn", "Indian Summer", "Bound by Honor", 
    "Super Mario Bros.", "Guilty as Sin", "Life with Mikey", "Whats Love Got to Do with It", "Son-In-Law", 
    "Hocus Pocus", "Another Stakeout", "My Boyfriends Back", "Father Hood", "The Joy Luck Club", 
    "Money for Nothing", "The Program", "Cool Runnings", "The Nightmare Before Christmas", "The Three Musketeers", 
    "Sister Act 2: Back in the Habit", "Tombstone", "Cabin Boy", "The Air Up There", "Iron Will", 
    "My Father the Hero", "Blank Check", "Angie", "The Ref", "D2: The Mighty Ducks", "Holy Matrimony", 
    "White Fang 2: Myth of the White Wolf", "The Inkwell", "When a Man Loves a Woman", "Renaissance Man", 
    "The Lion King", "I Love Trouble", "Angels in the Outfield", "In the Army Now", "Color of Night", "Its Pat", 
    "Camp Nowhere", "A Simple Twist of Fate", "Quiz Show", "Terminal Velocity", "Ed Wood", 
    "Robert A. Heinleins The Puppet Masters", "Squanto: A Warriors Tale", "The Santa Clause", 
    "A Low Down Dirty Shame", "Rudyard Kiplings The Jungle Book", "Houseguest", "Bad Company", 
    "Miami Rhapsody", "The Jerky Boys", "Heavyweights", "Man of the House", "Roommates", "Tall Tale", 
    "Funny Bones", "Jefferson in Paris", "A Goofy Movie", "While You Were Sleeping", "A Pyromaniacs Love Story", 
    "Crimson Tide", "Mad Love", "Pocahontas", "Judge Dredd", "Operation Dumbo Drop", "Dangerous Minds", "A Kid in King Arthurs Court", 
    "The Tie that Binds", "Unstrung Heroes", "The Big Green", "Dead Presidents", "Feast of July", 
    "The Scarlet Letter", "Frank and Ollie", "Powder", "Toy Story", "Father of the Bride, Part II", 
    "Nixon", "Tom and Huck", "Mr. Hollands Opus", "White Squall", "Mr. Wrong", "Muppet Treasure Island", 
    "Before and After", "Up Close and Personal", "Homeward Bound II: Lost in San Francisco", "Two Much", "Little Indian, Big City", "James and the Giant Peach", "Celtic Pride", "Last Dance", "Boys", "Spy Hard", "Eddie", "The Rock", 
    "The Hunchback of Notre Dame", "Phenomenon", "Kazaam", "Jack", "First Kid", "The Rich Mans Wife", "D3: The Mighty Ducks", "The Associate", "Ransom", "The War at Home", "101 Dalmatians [live action]", 
    "The Preachers Wife", "Evita", "Metro", "Prefontaine", "Shadow Conspiracy", "That Darn Cat", "Jungle 2 Jungle", "The Sixth Man", "Grosse Pointe Blank", "Romy and Micheles High School Reunion", "Gone Fishin", "Con Air", "Hercules", 
    "George of the Jungle", "Nothing to Lose", "Air Bud", "G.I. Jane", 
    "A Thousand Acres", "Washington Square", 
    "RocketMan", "Playing God", "Flubber", "An American Werewolf in Paris", "Mr. Magoo", "Kundun", "Deep Rising", "Krippendorfs Tribe", "An Alan Smithee Film: Burn, Hollywood, Burn", "Meet the Deedles", "He Got Game", "The Horse Whisperer", 
    "Six Days, Seven Nights", "Mulan", "Armageddon", "Jane Austens Mafia!", "The Parent Trap", "Firelight", "Simon Birch", "Holy Man", "Beloved", "The Waterboy", "Ill Be Home for Christmas", "Enemy of the State", "A Bugs Life", "Mighty Joe Young", "A Civil Action", "Rushmore", "My Favorite Martian", "The Other Sister", "Dougs first Movie", "10 Things I Hate About You", "Endurance", "Instinct", "Tarzan", "Summer of Sam", "Inspector Gadget", "The Sixth Sense", "The thirtheenth Warrior", "Breakfast of Champions", "Mumford", "Mystery Alaska", "The Hand Behind the Mouse: The Ub Iwerks Story", "The Straight Story", "The Insider", "Toy Story 2", "Deuce Bigalow: Male Gigolo", "Cradle Will Rock", "Bicentennial Man", "Fantasia/2000", "Play It to the Bone", "Gun Shy", "The Tigger Movie", "Mission to Mars", "Whispers", "High Fidelity", "Keeping the Faith", 
    "Dinosaur", "Shanghai Noon", "Gone in 60 Seconds", "Disneys The Kid", "Coyote Ugly", 
    "The Crew", "Duets", "Remember the Titans", "Playing Mona Lisa", "Unbreakable", "102 Dalmatians", "The Emperors New Groove", "O Brother, Where Art Thou", "Double Take", "Recess: Schools Out", "Just Visiting", "Pearl Harbor", "Atlantis: The Lost Empire", "crazy/beautiful", "The Princess Diaries", "Bubble Boy", "New Port South", "Max Keebles Big Move", "Corky Romano", "High Heels and Low Lifes", "Monsters, Inc.", "Out Cold", "The Royal Tenenbaums", "Snow Dogs", "The Count of Monte Cristo", "Return to Never Land", "Sorority Boys", "The Rookie", "Big Trouble", "Frank McKlusky, C.I.", "ESPNs Ultimate X", "Bad Company", "Lilo & Stitch", "Reign of Fire", "The Country Bears", "Signs", "Spirited Away", "Moonlight Mile", "Sweet Home Alabama", "Tuck Everlasting", "Santa Clause 2", "Treasure Planet", "The Hot Chick", "twenty-Fifth Hour", "The Recruit", "Shanghai Knights", "The Jungle Book 2", "Bringing Down the House", "Piglets Big Movie", "Ghosts of the Abyss", "Holes", "The Lizzie McGuire Movie", "Finding Nemo", "Pirates of the Caribbean: The Curse of the Black Pearl", "Freaky Friday", "Open Range", "Hope Springs", "Cold Creek Manor", "Under the Tuscan Sun", "Veronica Guerin", "Brother Bear", "The Haunted Mansion", "Calendar Girls", "The Young Black Stallion", "Teachers Pet", "Miracle", "Confessions of a Teenage Drama Queen", "Hidalgo", "The Ladykillers", "Home on the Range", "The Alamo", "Sacred Planet", "Raising Helen", "Around the World in 80 Days", "Americas Heart & Soul", "King Arthur", "The Village", "The Princess Diaries 2: Royal Engagement", "Mr. 3000", "The Last Shot", "Ladder 49", "The Incredibles", "National Treasure", "The Life Aquatic with Steve Zissou", "Aliens of the Deep", "Poohs Heffalump Movie", "The Pacifier", "Ice Princess", "A Lot Like Love", "The Hitchhikers Guide to the Galaxy", "Howls Moving Castle", "Herbie: Fully Loaded", "Dark Water", "Sky High", "Valiant", "Flightplan", "The Greatest Game Ever Played", "Shopgirl", "Chicken Little", "The Chronicles of Narnia: The Lion, the Witch and the Wardrobe", "Casanova", "Glory Road", "Annapolis", "Roving Mars", 
    "Eight Below", "The Shaggy Dog", "Stay Alive", "The Wild", "Stick It", "Goal! The Dream Begins", "Cars", "Pirates of the Caribbean: Dead Mans Chest", "Step Up", "Invincible", "The Guardian", "The Prestige", "The Santa Clause 3: The Escape Clause", "Déjà Vu", "Apocalypto", "Primeval", "Bridge to Terabithia", "Wild Hogs", "Meet the Robinsons", "The Invisible", "Pirates of the Caribbean: At Worlds End", "Ratatouille", "The Secret of the Magic Gourd", "Underdog", "The Game Plan", "Dan in Real Life", "Enchanted", "National Treasure: Book of Secrets", "Hannah Montana & Miley Cyrus: Best of Both Worlds Concert", "Step Up 2 the Streets", "College Road Trip", "The Chronicles of Narnia: Prince Caspian", "WALL•E", "Swing Vote", "Tinker Bell", "Miracle at St. Anna", "Beverly Hills Chihuahua", "Morning Light", "High School Musical 3: Senior Year", "Roadside Romeo", "Bolt", "Bedtime Stories", "Confessions of a Shopaholic", "Jonas Brothers: The three-D Concert Experience", "Race to Witch Mountain", "Hannah Montana the Movie", "Earth", "Trail of the Panda", "The Boys: The Sherman Brothers Story", "Up", "The Proposal", "G-Force", "Ponyo", "X-Games threeD: The Movie", "Walt & El Grupo", "Surrogates", "Tinker Bell and the Lost Treasure", "Kniga Masterov", "Disneys A Christmas Carol", "Old Dogs", "The Princess and the Frog", "When in Rome", "Alice in Wonderland", "Waking Sleeping Beauty", "The Last Song", "Oceans", "Prince of Persia: The Sands of Time", "Toy Story 3", "The Sorcerers Apprentice", "Step Up threeD", "Tales from Earthsea", "The Switch", "Tinker Bell and the Great Fairy Rescue", "You Again", "Secretariat", "Tangled", "The Tempest", "Tron: Legacy", "Once Upon a Warrior", "Gnomeo & Juliet", "I Am Number Four", "Mars Needs Moms", "African Cats: Kingdom of Courage", "Zokkomon", "Prom", "Pirates of the Caribbean: On Stranger Tides", "Cars 2", "Winnie the Pooh", "The Help", "Fright Night", "Real Steel", "The Muppets", "War Horse", "The Secret World of Arrietty", "John Carter", "Arjun: The Warrior Prince", "Chimpanzee", "Marvels The Avengers", "Brave", "Mad Buddies", "People Like Us", "The Odd Life of Timothy Green", "Secret of the Wings", "Barfi!", "Frankenweenie", "Wreck-It Ralph", "Lincoln", "Oz the Great and Powerful", "Wings of Life", "Iron Man 3", "Monsters University", "The Lone Ranger", "Planes", "The Fifth Estate", "The Wind Rises", "Thor: The Dark World", "Delivery Man", "Frozen", "Saving Mr. Banks", "The Pirate Fairy", "Need for Speed", "Muppets Most Wanted", "Captain America: The Winter Soldier", "Bears", "Million Dollar Arm", "Maleficent", "Planes: Fire and Rescue", "Guardians of the Galaxy", "The Hundred-Foot Journey", "Khoobsurat", "Alexander and the Terrible, Horrible, No Good, Very Bad Day", "Big Hero 6", "Into The Woods", "Strange Magic", "Tinker Bell and the Legend of the NeverBeast", "McFarland, USA", "Cinderella", "Monkey Kingdom", "Avengers: Age of Ultron", "Tomorrowland", "Inside Out", "ABCD2", "Ant-Man", "Bridge of Spies", "The Good Dinosaur", "Star Wars: The Force Awakens", "The Finest Hours", "Zootopia", "The Jungle Book", "Captain America: Civil War", "Alice Through the Looking Glass", "Finding Dory", "The BFG", "Petes Dragon", "The Light Between Oceans", "Queen of Katwe", "Doctor Strange", "Moana", "Rogue One: A Star Wars Story", "Dangal", 
    "Beauty and the Beast", "Born in China", "Guardians of the Galaxy, Vol. 2", "Pirates of the Caribbean: Dead Men Tell No Tales", "Cars 3", "Jagga Jasoos", "Thor: Ragnarok", "Coco", "Star Wars: The Last Jedi", "Black Panther", "A Wrinkle in Time", "Avengers: Infinity War", "Solo: A Star Wars Story", "Incredibles 2", "Ant-Man and The Wasp", "Christopher Robin", "The Nutcracker and the Four Realms", "Ralph Breaks the Internet", "Mary Poppins Returns", "Captain Marvel", "Dumbo", "Penguins", "Avengers: Endgame", "Aladdin", "Toy Story 4", "The Lion King", "Maleficent: Mistress of Evil", "Frozen 2", "Star Wars: The Rise of Skywalker"};

    theater *t = theater_create();
    
    for (size_t i = 0; i < num_movies; i++) {
        movie *m = movie_create(movie_names[i]);
        movie_print(m);
        add_movie(t, m);
    }
    // TODO: This is currently O(n) and we want it to be O(1)
    printf("Total tickets sold: %li\n", theater_tickets_sold(t));

}
