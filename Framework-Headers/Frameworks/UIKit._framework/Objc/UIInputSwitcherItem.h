//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherItem : NSObject
{
    NSString *_identifier;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    long long _selectedSegmentIndex;
    NSArray *_segmentTitles;
    NSArray *_segmentImages;
    CDUnknownBlockType _persistentSelectedIndex;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL isSegmentedItem;
@property (copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property (copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property (copy, nonatomic) CDUnknownBlockType persistentSelectedIndex; // @synthesize persistentSelectedIndex=_persistentSelectedIndex;
@property (strong, nonatomic) NSArray *segmentImages; // @synthesize segmentImages=_segmentImages;
@property (strong, nonatomic) NSArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
@property (nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property (strong, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property (strong, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;

+ (id)switcherItemWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
