//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLImageItemContents.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface QLImageItemDataContents : QLImageItemContents <NSSecureCoding>
{
    NSData *_imageData;
}

@property (strong, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;

+ (id)imageItemContentsWithImage:(id)arg1 imageData:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

