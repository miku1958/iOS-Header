//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTImageEncoder-Protocol.h>

@class NSString;

@interface AVTPNGImageEncoder : NSObject <AVTImageEncoder>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)dataFromImage:(id)arg1;
- (id)fileExtension;
- (id)imageFromData:(id)arg1 error:(id *)arg2;

@end

