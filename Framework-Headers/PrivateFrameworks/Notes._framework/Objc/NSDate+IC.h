//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (IC)

@property (readonly, nonatomic) NSString *ic_briefFormattedDate;
@property (readonly, nonatomic) NSString *ic_briefFormattedDateForAccessibility;
@property (readonly, nonatomic) BOOL ic_isToday;
@property (readonly, nonatomic) BOOL ic_isYesterday;
@property (readonly, nonatomic) NSString *ic_localDateWithSeconds;
@property (readonly, nonatomic) NSString *ic_shortFormattedDate;

+ (id)ic_modificationDateForNoteBeingEdited;
- (id)ic_briefFormattedDate:(BOOL)arg1;
- (BOOL)ic_isEarlierThanDate:(id)arg1;
- (BOOL)ic_isLaterThanDate:(id)arg1;
@end

