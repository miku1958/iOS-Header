//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ScreenReaderOutput/NSCopying-Protocol.h>
#import <ScreenReaderOutput/SCROIOElementProtocol-Protocol.h>

@class NSString;

@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying>
{
    unsigned int _ioObject;
    int _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (int)identifier;
- (id)initWithIOObject:(unsigned int)arg1;
- (unsigned int)ioObject;
- (BOOL)isEqual:(id)arg1;
- (int)transport;

@end

