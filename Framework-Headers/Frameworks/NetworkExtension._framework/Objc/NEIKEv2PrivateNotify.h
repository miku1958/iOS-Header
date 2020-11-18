//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying>
{
    unsigned short _notifyStatus;
    NSData *_notifyData;
}

@property (strong, nonatomic) NSData *notifyData; // @synthesize notifyData=_notifyData;
@property (nonatomic) unsigned short notifyStatus; // @synthesize notifyStatus=_notifyStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithNotifyStatus:(unsigned short)arg1 notifyData:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
