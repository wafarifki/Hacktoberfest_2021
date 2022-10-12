// Instantly switching the animation of all players in a radius
// example: ["Acts_Dance_01", 500]

setAnimation 
{
    params [ "_animationClassName", "_radius"]
    {
        if (isplayer _x && {
            player != _x
        }) then {
            [_x, "Acts_Dance_01"] remoteExecCall [_animationClassName];
        };
    } forEach (player nearEntities [ "Man", _radius ]);
};