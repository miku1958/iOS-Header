//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXContextualMemoriesSetting-Protocol.h>

@class NSDate, NSDateFormatter, NSString;

@interface PXContextualMemoriesTimeSetting : NSObject <PXContextualMemoriesSetting>
{
    NSDate *_date;
    NSDateFormatter *_dateFormatter;
}

@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (strong, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)_forceMiddayDateForDate:(id)arg1;
- (id)init;
- (void)resetToDefault;

@end

