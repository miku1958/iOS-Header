//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface HMCameraClipEncryptionManager : NSObject
{
    NSData *_key;
}

@property (readonly, copy) NSData *key; // @synthesize key=_key;

- (void).cxx_destruct;
- (id)encryptedDataContextFromData:(id)arg1;
- (id)init;
- (id)initWithKey:(id)arg1;

@end

