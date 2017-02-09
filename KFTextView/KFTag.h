//
//  KFLabel.h
//  KFTextView
//
//  Created by SunnyFeng on 11/20/15.
//  Copyright © 2015 SunnyFeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KFTag : NSObject

@property (nonatomic) NSString *text;
@property (nonatomic) NSUInteger location;

- (instancetype)initWithText:(NSString *)text andLocation:(NSUInteger)location;

@end
