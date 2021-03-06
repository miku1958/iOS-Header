//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXAssertionWorkItem : NSObject
{
    BOOL _acquire;
    NSString *_type;
    NSString *_identifier;
    unsigned long long _retries;
}

@property (readonly, nonatomic) BOOL acquire; // @synthesize acquire=_acquire;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long retries; // @synthesize retries=_retries;
@property (readonly, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(BOOL)arg3;

@end

