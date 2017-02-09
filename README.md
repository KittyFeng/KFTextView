# KFTextView
A self-adapted textView with tags,you can set your tags in the textview.



## A simple TextView with tags
KFTextView is a self-adapted textView with Tags, and you can set tags easily in text view。

KFTextView inherits from UITextView and all the property that applies to UITextView can also be used for KFTextView.
Works on iOS 7+. 

## Usage

All you have to do is import the 'KFTextView' folder in you project,and then create the KFTextView object,KFTextView handles everything for you.

####create text view
```obj-c
KFTextView *testView = [[KFTextView alloc]initWithFrame:CGRectMake(10, 50, self.view.frame.size.width - 20, 50)];
testView.font = [UIFont systemFontOfSize:14.f];
testView.textContainerInset = UIEdgeInsetsMake(3, 5, 3, 5);
testView.hasSpace = YES;
testView.tagBgColor = [UIColor brownColor];
testView.contentInset = UIEdgeInsetsMake(5, 0, 5, 0);
UIImage *tagBgImage = [[UIImage imageNamed:@"bg"]resizableImageWithCapInsets:UIEdgeInsetsMake(6, 6, 6, 6) resizingMode:UIImageResizingModeStretch];
testView.tagBgImage = tagBgImage;
testView.tagColor = [UIColor whiteColor];
testView.autoIncrement = NO;
testView.maxHeight = 80;
[testView setPlaceholder:@"Hahahaha..."];
testView.backgroundColor = [UIColor groupTableViewBackgroundColor];
testView.KFDelegate = self;
[self.view addSubview:testView];
```
####set tags
```obj-c
[testView addTagToCurrentLocation:@"Tag"]
```

## License

Released under the [MIT License](LICENSE).


