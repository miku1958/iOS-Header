//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IMAVMicrophone : NSObject
{
    id _internalDevice;
}

@property (readonly, strong, nonatomic) NSString *name;
@property (readonly, strong, nonatomic) NSString *uniqueID;

- (id)_AVAudioDevice;
- (id)_initWithAVAudioDevice:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;

@end

