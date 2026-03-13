import Fragment from "react";


export default function LandingPage(){
    return( 
        <>
            <NavBar />
            <MainPage/>
        </>
    )
}

function NavBar(){
    return(
        <nav className="sticky static z-50 flex items-end  justify-content-center w-full h-16 px-4 bg-gray-800 shadow-lg">
            <text className="text-amber-200 font-bold font-Newsreader justify-self-center text-4xl relative top-4 ml-4">Jujuan Lawson</text>
        </nav>
    )
}

function MainPage(){
    return(
        <div className="flex flex-col items-center justify-center h-screen bg-gray-700">
            <h1 className="text-5xl font-bold mb-4">Welcome to My Portfolio</h1>
            <p className="text-xl text-gray-900 mb-8">Discover my projects and skills</p>
            <button className="px-6 py-3 bg-blue-600 text-black rounded-lg hover:bg-blue-700 transition duration-300">View Projects</button>
        </div>
    )
}