(() => {
  fetch("https://api.github.com/users/andrianfaa")
    .then((res) => res.json())
    .then((res) => console.log(JSON.stringify(res, 0, 4)));
})();

//  Result:
//
// {
//   "login": "andrianfaa",
//   "id": 74356783,
//   "node_id": "MDQ6VXNlcjc0MzU2Nzgz",
//   "avatar_url": "https://avatars.githubusercontent.com/u/74356783?v=4",
//   "gravatar_id": "",
//   "url": "https://api.github.com/users/andrianfaa",
//   "html_url": "https://github.com/andrianfaa",
//   "followers_url": "https://api.github.com/users/andrianfaa/followers",
//   "following_url": "https://api.github.com/users/andrianfaa/following{/other_user}",
//   "gists_url": "https://api.github.com/users/andrianfaa/gists{/gist_id}",
//   "starred_url": "https://api.github.com/users/andrianfaa/starred{/owner}{/repo}",
//   "subscriptions_url": "https://api.github.com/users/andrianfaa/subscriptions",
//   "organizations_url": "https://api.github.com/users/andrianfaa/orgs",
//   "repos_url": "https://api.github.com/users/andrianfaa/repos",
//   "events_url": "https://api.github.com/users/andrianfaa/events{/privacy}",
//   "received_events_url": "https://api.github.com/users/andrianfaa/received_events",
//   "type": "User",
//   "site_admin": false,
//   "name": "Andrian Fadhilla",
//   "company": null,
//   "blog": "https://www.andriann.com",
//   "location": "Tambun Selatan, Bekasi",
//   "email": null,
//   "hireable": true,
//   "bio": "18 y.o Web Developer",
//   "twitter_username": null,
//   "public_repos": 12,
//   "public_gists": 0,
//   "followers": 38,
//   "following": 51,
//   "created_at": "2020-11-12T11:30:15Z",
//   "updated_at": "2021-10-13T02:20:58Z"
// }
