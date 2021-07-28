[33mcommit bcb0fda89f1c656f36066f9675a92805e9daa204[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m, [m[1;31mmain/master[m[33m)[m
Author: Pratham Dhawan <pdhawan1975@gmail.com>
Date:   Thu Jul 15 22:59:15 2021 +0530

    learnt how to use ANGULAR MATERIALS

[1mdiff --git a/angular.json b/angular.json[m
[1mindex 8a3adc8..9e8980a 100644[m
[1m--- a/angular.json[m
[1m+++ b/angular.json[m
[36m@@ -30,6 +30,7 @@[m
               "src/assets"[m
             ],[m
             "styles": [[m
[32m+[m[32m              "./node_modules/@angular/material/prebuilt-themes/indigo-pink.css",[m
               "src/styles.css"[m
             ],[m
             "scripts": [][m
[36m@@ -97,6 +98,7 @@[m
               "src/assets"[m
             ],[m
             "styles": [[m
[32m+[m[32m              "./node_modules/@angular/material/prebuilt-themes/purple-green.css",[m
               "src/styles.css"[m
             ],[m
             "scripts": [][m
[1mdiff --git a/package-lock.json b/package-lock.json[m
[1mindex a142c86..ed0f8d6 100644[m
[1m--- a/package-lock.json[m
[1m+++ b/package-lock.json[m
[36m@@ -153,6 +153,23 @@[m
         "tslib": "^2.2.0"[m
       }[m
     },[m
[32m+[m[32m    "@angular/cdk": {[m
[32m+[m[32m      "version": "12.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@angular/cdk/-/cdk-12.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-ALupZejZDsVYcbNZcEH1cV8SDgVBL40FAwDnlSZxCgd0HOBHH0ZqQV+8z0uCQeMatoNM+SwmJ8Y1JXYh9Bqfiw==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "parse5": "^5.0.0",[m
[32m+[m[32m        "tslib": "^2.2.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "parse5": {[m
[32m+[m[32m          "version": "5.1.1",[m
[32m+[m[32m          "resolved": "https://registry.npmjs.org/parse5/-/parse5-5.1.1.tgz",[m
[32m+[m[32m          "integrity": "sha512-ugq4DFI0Ptb+WWjAdOK16+u/nHfiIrcE+sh8kZMaM0WllQKLI9rOUq6c2b7cwPkXdzfQESqvoqK6ug7U/Yyzug==",[m
[32m+[m[32m          "optional": true[m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "@angular/cli": {[m
       "version": "12.1.1",[m
       "resolved": "https://registry.npmjs.org/@angular/cli/-/cli-12.1.1.tgz",[m
[36m@@ -332,6 +349,14 @@[m
         "tslib": "^2.2.0"[m
       }[m
     },[m
[32m+[m[32m    "@angular/material": {[m
[32m+[m[32m      "version": "12.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@angular/material/-/material-12.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-DpqnvwnVqaudFRXTNyJR8r/gbKG4RtE3RGc6q4FgdN9SOfRh/q/yYyNnOUnbCwPgLTmkfGz+bj7++GA8gzhSkg==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "tslib": "^2.2.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "@angular/platform-browser": {[m
       "version": "12.1.1",[m
       "resolved": "https://registry.npmjs.org/@angular/platform-browser/-/platform-browser-12.1.1.tgz",[m
[1mdiff --git a/package.json b/package.json[m
[1mindex 14aa63f..3962331 100644[m
[1m--- a/package.json[m
[1m+++ b/package.json[m
[36m@@ -11,10 +11,12 @@[m
   "private": true,[m
   "dependencies": {[m
     "@angular/animations": "~12.1.1",[m
[32m+[m[32m    "@angular/cdk": "^12.1.2",[m
     "@angular/common": "~12.1.1",[m
     "@angular/compiler": "~12.1.1",[m
     "@angular/core": "~12.1.1",[m
     "@angular/forms": "~12.1.1",[m
[32m+[m[32m    "@angular/material": "^12.1.2",[m
     "@angular/platform-browser": "~12.1.1",[m
     "@angular/platform-browser-dynamic": "~12.1.1",[m
     "@angular/router": "~12.1.1",[m
[1mdiff --git a/src/app/app.component.css b/src/app/app.component.css[m
[1mindex e69de29..43c1e5e 100644[m
[1m--- a/src/app/app.component.css[m
[1m+++ b/src/app/app.component.css[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32mmain{[m
[32m+[m
[32m+[m[32m  width: 50%;[m
[32m+[m[32m  margin: auto;[m
[32m+[m[32m}[m
[1mdiff --git a/src/app/app.component.html b/src/app/app.component.html[m
[1mindex d8be11d..28b641b 100644[m
[1m--- a/src/app/app.component.html[m
[1m+++ b/src/app/app.component.html[m
[36m@@ -1 +1,5 @@[m
[31m-<app-post-create></app-post-create>[m
\ No newline at end of file[m
[32m+[m[32m<app-header></app-header>[m
[32m+[m[32m<main>[m
[32m+[m[32m  <app-post-create (postCreated)="onPostAdded($event)"></app-post-create>[m
[32m+[m[32m  <app-post-list [posts]="availablePosts"></app-post-list>[m
[32m+[m[32m</main>[m
[1mdiff --git a/src/app/app.component.ts b/src/app/app.component.ts[m
[1mindex 1645adc..38570ef 100644[m
[1m--- a/src/app/app.component.ts[m
[1m+++ b/src/app/app.component.ts[m
[36m@@ -1,4 +1,5 @@[m
 import { Component } from '@angular/core';[m
[32m+[m[32mimport { Post } from './posts/post-model';[m
 [m
 @Component({[m
   selector: 'app-root',[m
[36m@@ -6,5 +7,11 @@[m [mimport { Component } from '@angular/core';[m
   styleUrls: ['./app.component.css'][m
 })[m
 export class AppComponent {[m
[32m+[m
   title = 'mean-course';[m
[32m+[m[32m  availablePosts: Post[] = [];[m
[32m+[m
[32m+[m[32m  onPostAdded(post){[m
[32m+[m[32m    this.availablePosts.push(post);[m
[32m+[m[32m  }[m
 }[m
[1mdiff --git a/src/app/app.module.ts b/src/app/app.module.ts[m
[1mindex 85656d6..208336a 100644[m
[1m--- a/src/app/app.module.ts[m
[1m+++ b/src/app/app.module.ts[m
[36m@@ -1,16 +1,35 @@[m
 import { NgModule } from '@angular/core';[m
[32m+[m[32mimport { FormsModule } from '@angular/forms';[m
 import { BrowserModule } from '@angular/platform-browser';[m
[32m+[m[32mimport { BrowserAnimationsModule } from '@angular/platform-browser/animations';[m
[32m+[m
[32m+[m[32mimport { MatCardModule  } from '@angular/material/card';[m
[32m+[m[32mimport { MatInputModule  } from '@angular/material/input';[m
[32m+[m[32mimport { MatButtonModule } from '@angular/material/button';[m
[32m+[m[32mimport { MatToolbarModule } from '@angular/material/toolbar';[m
[32m+[m[32mimport { MatExpansionModule } from '@angular/material/expansion';[m
 [m
 import { AppComponent } from './app.component';[m
[31m-import { PostCreateComponent } from './posts/post-create/post-create.component'; [m
[32m+[m[32mimport { HeaderComponent } from './header/header.component';[m
[32m+[m[32mimport { PostListComponent } from './posts/post-list/post-list.component';[m
[32m+[m[32mimport { PostCreateComponent } from './posts/post-create/post-create.component';[m
 [m
 @NgModule({[m
   declarations: [[m
     AppComponent,[m
[31m-    PostCreateComponent[m
[32m+[m[32m    HeaderComponent,[m
[32m+[m[32m    PostCreateComponent,[m
[32m+[m[32m    PostListComponent[m
   ],[m
   imports: [[m
[31m-    BrowserModule[m
[32m+[m[32m    BrowserModule,[m
[32m+[m[32m    FormsModule,[m
[32m+[m[32m    BrowserAnimationsModule,[m
[32m+[m[32m    MatCardModule,[m
[32m+[m[32m    MatInputModule,[m
[32m+[m[32m    MatButtonModule,[m
[32m+[m[32m    MatToolbarModule,[m
[32m+[m[32m    MatExpansionModule[m
   ],[m
   providers: [],[m
   bootstrap: [AppComponent][m
[1mdiff --git a/src/app/header/header.component.css b/src/app/header/header.component.css[m
[1mnew file mode 100644[m
[1mindex 0000000..230cfcd[m
[1m--- /dev/null[m
[1m+++ b/src/app/header/header.component.css[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32mmat-toolbar{[m
[32m+[m[32m}[m
[1mdiff --git a/src/app/header/header.component.html b/src/app/header/header.component.html[m
[1mnew file mode 100644[m
[1mindex 0000000..1da14fd[m
[1m--- /dev/null[m
[1m+++ b/src/app/header/header.component.html[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32m<mat-toolbar[m
[32m+[m[32mcolor="warn">My Messages</mat-toolbar>[m
[1mdiff --git a/src/app/header/header.component.ts b/src/app/header/header.component.ts[m
[1mnew file mode 100644[m
[1mindex 0000000..ae8fd0c[m
[1m--- /dev/null[m
[1m+++ b/src/app/header/header.component.ts[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32mimport { Component } from "@angular/core";[m
[32m+[m
[32m+[m[32m@Component({[m
[32m+[m[32m  selector: 'app-header',[m
[32m+[m[32m  templateUrl : './header.component.html',[m
[32m+[m[32m  styleUrls:['./header.component.css'][m
[32m+[m[32m})[m
[32m+[m[32mexport class HeaderComponent{[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/src/app/posts/post-create/post-create.component.css b/src/app/posts/post-create/post-create.component.css[m
[1mnew file mode 100644[m
[1mindex 0000000..6aed525[m
[1m--- /dev/null[m
[1m+++ b/src/app/posts/post-create/post-create.component.css[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32mmat-form-field{[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m}[m
[32m+[m[32mtextarea{[m
[32m+[m[32m  overflow: auto;[m
[32m+[m[32m  resize: none;[m
[32m+[m[32m}[m
[1mdiff --git a/src/app/posts/post-create/post-create.component.html b/src/app/posts/post-create/post-create.component.html[m
[1mindex cee00cf..ddf2da0 100644[m
[1m--- a/src/app/posts/post-create/post-create.component.html[m
[1m+++ b/src/app/posts/post-create/post-create.component.html[m
[36m@@ -1,5 +1,16 @@[m
[31m-<h1>Post Create Component</h1>[m
[32m+[m[32m<mat-card>[m
 [m
[31m-<textarea rows="5"></textarea>[m
[31m-<hr>[m
[31m-<button (click)="onAddPost()">Save Post</button>[m
\ No newline at end of file[m
[32m+[m[32m  <mat-form-field>[m
[32m+[m[32m    <input matInput placeholder="Title" type="text"[m
[32m+[m[32m      [(ngModel)]="newPostTitle">[m
[32m+[m[32m  </mat-form-field>[m
[32m+[m
[32m+[m[32m  <mat-form-field>[m
[32m+[m[32m    <textarea matInput placeholder="What are you thinking?" rows="4"[m
[32m+[m[32m      [(ngModel)]="newPostContent"></textarea>[m
[32m+[m[32m  </mat-form-field>[m
[32m+[m
[32m+[m[32m  <button mat-raised-button color = "warn" (click)="onAddPost()">[m
[32m+[m[32m    Save Post</button>[m
[32m+[m
[32m+[m[32m</mat-card>[m
[1mdiff --git a/src/app/posts/post-create/post-create.component.ts b/src/app/posts/post-create/post-create.component.ts[m
[1mindex 52b8f66..1475935 100644[m
[1m--- a/src/app/posts/post-create/post-create.component.ts[m
[1m+++ b/src/app/posts/post-create/post-create.component.ts[m
[36m@@ -1,13 +1,19 @@[m
[31m-import { Component } from '@angular/core';[m
[32m+[m[32mimport { Component, EventEmitter, Output } from '@angular/core';[m
[32m+[m[32mimport { Post } from '../post-model';[m
 [m
 @Component({[m
[31m-	selector : 'app-post-create',[m
[31m-	templateUrl : './post-create.component.html'[m
[32m+[m	[32mselector: 'app-post-create',[m
[32m+[m	[32mtemplateUrl: './post-create.component.html',[m
[32m+[m[32m  styleUrls: ['./post-create.component.css'][m
 })[m
 export class PostCreateComponent{[m
 [m
[31m-	onAddPost(){[m
[31m-		alert('Done!');[m
[32m+[m[32m  newPostTitle = '';[m
[32m+[m[32m  newPostContent = '';[m
[32m+[m[32m  @Output() postCreated = new EventEmitter<Post>();[m
[32m+[m
[32m+[m[32m  onAddPost(){[m
[32m+[m[32m    const newPost: Post = {title: this.newPostTitle, content: this.newPostContent};[m
[32m+[m		[32mthis.postCreated.emit(newPost);[m
 	}[m
 }[m
[31m-[m
[1mdiff --git a/src/app/posts/post-list/post-list.component.css b/src/app/posts/post-list/post-list.component.css[m
[1mnew file mode 100644[m
[1mindex 0000000..a264d1a[m
[1m--- /dev/null[m
[1m+++ b/src/app/posts/post-list/post-list.component.css[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m:host{[m
[32m+[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  margin-top: 1rem;[m
[32m+[m[32m}[m
[32m+[m[32m.noPosts{[m
[32m+[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m}[m
[1mdiff --git a/src/app/posts/post-list/post-list.component.html b/src/app/posts/post-list/post-list.component.html[m
[1mnew file mode 100644[m
[1mindex 0000000..cac1404[m
[1m--- /dev/null[m
[1m+++ b/src/app/posts/post-list/post-list.component.html[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<mat-accordion *ngIf="posts.length>0">[m
[32m+[m[32m  <mat-expansion-panel *ngFor="let post of posts">[m
[32m+[m[32m    <mat-expansion-panel-header>[m
[32m+[m[32m        {{ post['title'] }}[m
[32m+[m[32m    </mat-expansion-panel-header>[m
[32m+[m[32m    <mat-panel-description>[m
[32m+[m[32m        {{ post['content'] }}[m
[32m+[m[32m    </mat-panel-description>[m
[32m+[m[32m  </mat-expansion-panel>[m
[32m+[m[32m</mat-accordion>[m
[32m+[m
[32m+[m[32m<p class ="noPosts mat-body-2" *ngIf="posts.length<=0">No posts available :(</p>[m
[1mdiff --git a/src/app/posts/post-list/post-list.component.ts b/src/app/posts/post-list/post-list.component.ts[m
[1mnew file mode 100644[m
[1mindex 0000000..c1b814a[m
[1m--- /dev/null[m
[1m+++ b/src/app/posts/post-list/post-list.component.ts[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32mimport { Component, Input } from "@angular/core";[m
[32m+[m[32mimport { Post } from '../post-model';[m
[32m+[m
[32m+[m[32m@Component({[m
[32m+[m[32m  selector: 'app-post-list',[m
[32m+[m[32m  templateUrl: './post-list.component.html',[m
[32m+[m[32m  styleUrls: ['./post-list.component.css'][m
[32m+[m[32m})[m
[32m+[m[32mexport class PostListComponent{[m
[32m+[m
[32m+[m[32m @Input() posts: Post[] = [];[m
[32m+[m[32m}[m
[1mdiff --git a/src/app/posts/post-model.ts b/src/app/posts/post-model.ts[m
[1mnew file mode 100644[m
[1mindex 0000000..1de419f[m
[1m--- /dev/null[m
[1m+++ b/src/app/posts/post-model.ts[m
[36m@@ -0,0 +1,4 @@[m
[32m+[m[32mexport interface Post{[m
[32m+[m[32m  title: string;[m
[32m+[m[32m  content: string;[m
[32m+[m[32m}[m
[1mdiff --git a/src/index.html b/src/index.html[m
[1mindex 3a2f602..5f1e71e 100644[m
[1m--- a/src/index.html[m
[1m+++ b/src/index.html[m
[36m@@ -6,8 +6,11 @@[m
   <base href="/">[m
   <meta name="viewport" content="width=device-width, initial-scale=1">[m
   <link rel="icon" type="image/x-icon" href="favicon.ico">[m
[32m+[m[32m  <link rel="preconnect" href="https://fonts.gstatic.com">[m
[32m+[m[32m  <link href="https://fonts.googleapis.com/css2?family=Roboto:wght@300;400;500&display=swap" rel="stylesheet">[m
[32m+[m[32m  <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">[m
 </head>[m
[31m-<body>[m
[32m+[m[32m<body class="mat-typography">[m
   <app-root></app-root>[m
 </body>[m
 </html>[m
[1mdiff --git a/src/styles.css b/src/styles.css[m
[1mindex 90d4ee0..7e7239a 100644[m
[1m--- a/src/styles.css[m
[1m+++ b/src/styles.css[m
[36m@@ -1 +1,4 @@[m
 /* You can add global styles to this file, and also import other style files */[m
[32m+[m
[32m+[m[32mhtml, body { height: 100%; }[m
[32m+[m[32mbody { margin: 0; font-family: Roboto, "Helvetica Neue", sans-serif; }[m
