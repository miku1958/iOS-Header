//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface MFMessageDataContainer : NSObject
{
    NSData *_data;
    BOOL _partial;
    BOOL _incomplete;
}

- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 partial:(BOOL)arg2 incomplete:(BOOL)arg3;

@end

