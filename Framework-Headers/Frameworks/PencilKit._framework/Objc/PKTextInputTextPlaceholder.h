//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextPlaceholder.h>

@class NSArray;

@interface PKTextInputTextPlaceholder : UITextPlaceholder
{
    BOOL _shouldIgnoreOrigin;
    id _placeholder;
    NSArray *__rects;
}

@property (strong, nonatomic) NSArray *_rects; // @synthesize _rects=__rects;
@property (strong, nonatomic) id placeholder; // @synthesize placeholder=_placeholder;
@property (nonatomic) BOOL shouldIgnoreOrigin; // @synthesize shouldIgnoreOrigin=_shouldIgnoreOrigin;

+ (id)placeholderWithText:(id)arg1 rects:(id)arg2;
+ (id)placeholderWithTextPlaceholder:(id)arg1;
+ (id)placeholderWithToken:(id)arg1 frame:(struct CGRect)arg2;
+ (id)placeholderWithWebTextPlaceholder:(id)arg1;
- (void).cxx_destruct;
- (id)rects;

@end

