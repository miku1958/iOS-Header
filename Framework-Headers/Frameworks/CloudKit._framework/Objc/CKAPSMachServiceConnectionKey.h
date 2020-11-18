//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying>
{
    NSString *_environmentName;
    NSString *_namedDelegatePort;
}

@property (copy, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property (copy, nonatomic) NSString *namedDelegatePort; // @synthesize namedDelegatePort=_namedDelegatePort;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
