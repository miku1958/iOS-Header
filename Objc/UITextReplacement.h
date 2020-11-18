//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface UITextReplacement : NSObject
{
    UITextRange *_range;
    NSString *_originalText;
    NSString *_replacementText;
    NSString *_menuTitle;
    unsigned int _usageTrackingMask;
}

@property (readonly, nonatomic) NSString *menuTitle; // @synthesize menuTitle=_menuTitle;
@property (readonly, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property (readonly, nonatomic) UITextRange *range; // @synthesize range=_range;
@property (readonly, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property (nonatomic) unsigned int usageTrackingMask; // @synthesize usageTrackingMask=_usageTrackingMask;

+ (id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4;
- (void).cxx_destruct;

@end

