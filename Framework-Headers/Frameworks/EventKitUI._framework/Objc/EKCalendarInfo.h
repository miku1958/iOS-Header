//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendar, EKGroupInfo, NSString, UIColor, UIImage;

@interface EKCalendarInfo : NSObject
{
    NSString *_title;
    BOOL _selected;
    BOOL _isEnabled;
    int _customGroupType;
    EKCalendar *_calendar;
    UIColor *_color;
    EKGroupInfo *_group;
}

@property (strong, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (nonatomic) int customGroupType; // @synthesize customGroupType=_customGroupType;
@property (readonly, nonatomic) int displayOrder;
@property (readonly, nonatomic) BOOL excludeFromSelectAll;
@property (weak, nonatomic) EKGroupInfo *group; // @synthesize group=_group;
@property (readonly, nonatomic) UIImage *highlightedIcon;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property (readonly, nonatomic) BOOL isPublished;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (nonatomic) BOOL selected; // @synthesize selected=_selected;
@property (readonly, copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)_updateCustomGroupType;
- (id)description;
- (id)initWithCalendar:(id)arg1;

@end

