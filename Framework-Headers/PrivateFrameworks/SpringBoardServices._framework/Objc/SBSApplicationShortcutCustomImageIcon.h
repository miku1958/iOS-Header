//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSData;

@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon
{
    BOOL _isTemplate;
    NSData *_imageData;
    long long _dataType;
}

@property (readonly, nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property (readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property (readonly, nonatomic) NSData *imagePNGData;
@property (readonly, nonatomic) BOOL isTemplate; // @synthesize isTemplate=_isTemplate;

- (void).cxx_destruct;
- (id)_initForSubclass;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithImageData:(id)arg1 dataType:(long long)arg2;
- (id)initWithImageData:(id)arg1 dataType:(long long)arg2 isTemplate:(BOOL)arg3;
- (id)initWithImagePNGData:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

