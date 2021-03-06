//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface CALNNotificationCategory : NSObject <NSCopying>
{
    NSString *_identifier;
    NSArray *_actions;
    unsigned long long _options;
    NSString *_hiddenPreviewsBodyPlaceholder;
    NSString *_categorySummaryFormat;
}

@property (readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, copy, nonatomic) NSString *categorySummaryFormat; // @synthesize categorySummaryFormat=_categorySummaryFormat;
@property (readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // @synthesize hiddenPreviewsBodyPlaceholder=_hiddenPreviewsBodyPlaceholder;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;

+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCategory:(id)arg1;

@end

