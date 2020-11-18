//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface PKRemoteAssetManifestItem : NSObject <NSSecureCoding>
{
    NSURL *_localURL;
    NSURL *_remoteURL;
    NSURL *_passURL;
    NSString *_sha1Hex;
    NSNumber *_size;
}

@property (copy, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property (copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property (readonly, weak, nonatomic) NSString *relativeLocalPath;
@property (copy, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property (copy, nonatomic) NSString *sha1Hex; // @synthesize sha1Hex=_sha1Hex;
@property (copy, nonatomic) NSNumber *size; // @synthesize size=_size;

+ (id)itemWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id *)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id *)arg4;

@end

