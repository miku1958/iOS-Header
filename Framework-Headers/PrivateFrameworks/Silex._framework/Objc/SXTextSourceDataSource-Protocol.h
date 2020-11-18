//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, NSString, SXComponentTextRules, SXTextResizer, SXTextSource;
@protocol SXComponentTextStyle, SXTextStyle;

@protocol SXTextSourceDataSource <NSObject>
- (NSArray *)additionsForTextSource:(SXTextSource *)arg1;
- (id<SXComponentTextStyle>)componentTextStyleForTextSource:(SXTextSource *)arg1 inheritingFromDefaultStyles:(BOOL)arg2;
- (NSString *)contentSizeCategoryForTextSource:(SXTextSource *)arg1;
- (id<SXComponentTextStyle>)defaultComponentTextStyleForTextSource:(SXTextSource *)arg1;
- (NSArray *)defaultComponentTextStylesForTextSource:(SXTextSource *)arg1;
- (NSArray *)inlineTextStylesForTextSource:(SXTextSource *)arg1;
- (id<SXTextStyle>)linkStyleForTextSource:(SXTextSource *)arg1;
- (SXTextResizer *)textResizerForTextSource:(SXTextSource *)arg1;
- (SXComponentTextRules *)textRulesForTextSource:(SXTextSource *)arg1;
- (id<SXTextStyle>)textStyleForIdentifier:(NSString *)arg1;
@end

