//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface UIActivityItemURLRep : NSObject
{
    NSURL *_URL;
    UIImage *_thumbnail;
    long long _attachmentURLType;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (nonatomic) long long attachmentURLType; // @synthesize attachmentURLType=_attachmentURLType;
@property (strong, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;

- (void).cxx_destruct;
- (BOOL)isFileURL;
- (id)scheme;

@end

