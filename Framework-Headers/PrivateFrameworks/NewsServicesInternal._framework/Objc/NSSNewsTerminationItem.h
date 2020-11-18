//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSCopying-Protocol.h>

@class NSString;

@interface NSSNewsTerminationItem : NSObject <NSCopying>
{
    unsigned long long _processType;
    NSString *_bundleID;
}

@property (copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (nonatomic) unsigned long long processType; // @synthesize processType=_processType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithProcessType:(unsigned long long)arg1 bundleID:(id)arg2;

@end

