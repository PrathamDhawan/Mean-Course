import { Component, EventEmitter, Output } from '@angular/core';
import { NgForm } from '@angular/forms';
import { PostService } from '../post-service';

@Component({
	selector: 'app-post-create',
	templateUrl: './post-create.component.html',
  styleUrls: ['./post-create.component.css']
})
export class PostCreateComponent{

  newPostTitle = '';
  newPostContent = '';

  constructor(public postService: PostService){
  };

  onAddPost(form: NgForm){

    if(form.invalid){
      return;
    }

		this.postService.addPosts(form.value.title, form.value.content);
    form.resetForm();   
	}
}
