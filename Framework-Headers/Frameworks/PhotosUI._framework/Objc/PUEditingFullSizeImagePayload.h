//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface PUEditingFullSizeImagePayload : NSObject <NSSecureCoding>
{
    NSURL *_url;
    long long _imageOrientation;
    NSString *_sandboxExtensionToken;
}

@property (nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property (strong, nonatomic) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property (strong, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
