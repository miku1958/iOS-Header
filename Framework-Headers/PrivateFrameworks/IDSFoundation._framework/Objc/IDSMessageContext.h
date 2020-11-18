//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface IDSMessageContext : NSObject
{
    NSMutableDictionary *_dict;
    id _boostContext;
}

@property (strong, nonatomic) id boostContext;
@property (nonatomic) long long broadcastID;
@property (nonatomic) NSNumber *broadcastTime;
@property (nonatomic) BOOL expectsPeerResponse;
@property (copy, nonatomic) NSString *fromID;
@property (copy, nonatomic) NSString *incomingResponseIdentifier;
@property (nonatomic) NSNumber *originalCommand;
@property (copy, nonatomic) NSString *outgoingResponseIdentifier;
@property (nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *storageGuid;
@property (copy, nonatomic) NSString *toID;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL wantsManualAck;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
