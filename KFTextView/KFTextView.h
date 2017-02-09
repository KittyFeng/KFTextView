//
//  KFTextView.h
//  KFTextView
//
//  Created by SunnyFeng on 11/20/15.
//  Copyright © 2015 SunnyFeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KFTextViewContent.h"
#import "KFTag.h"

@class KFTextView;
@protocol KFTextViewDelegate <NSObject>

- (void)textView:(KFTextView *)textView heightWillChange:(CGFloat)height;
- (void)textView:(KFTextView *)textView wordsChanged:(CGFloat )words;

@end

@interface KFTextView : UITextView

@property (nonatomic) UIFont *textFont;


@property (nonatomic) NSInteger totalWords;

@property (nonatomic) KFTextViewContent *content;
@property (nonatomic) NSArray<NSNumber *> *tagRanges;

- (void)setContent:(KFTextViewContent *)content;
- (void)setTag:(KFTag *)tag;
- (void)setTags:(NSArray *)tags;
- (void)addTagToCurrentLocation:(NSString *)tagName;

@property (nonatomic) NSString *placeholder;
@property (nonatomic) UIColor *placeholderColor;



@property (nonatomic) UIColor *tagColor;
@property (nonatomic) UIColor *tagBgColor;
@property (nonatomic) UIImage *tagBgImage;
@property (nonatomic) BOOL hasSpace;

@property (nonatomic) BOOL autoIncrement;
@property (nonatomic) CGFloat maxHeight;
@property (nonatomic) CGFloat minHeight;
@property (nonatomic,readonly) CGFloat textHeight;
@property (nonatomic) CGFloat viewHeight;

@property (nonatomic) id <KFTextViewDelegate> KFDelegate;




@end
