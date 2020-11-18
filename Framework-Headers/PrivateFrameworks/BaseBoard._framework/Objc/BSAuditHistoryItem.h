//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>

@class NSDate, NSString;

@interface BSAuditHistoryItem : NSObject <BSXPCCoding>
{
    NSDate *_date;
    NSString *_description;
}

@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value; // @synthesize value=_description;

+ (id)itemWithString:(id)arg1;
+ (id)itemWithWithFormat:(id)arg1;
- (id)_timeFormatter;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)itemWithString:(id)arg1;

@end
