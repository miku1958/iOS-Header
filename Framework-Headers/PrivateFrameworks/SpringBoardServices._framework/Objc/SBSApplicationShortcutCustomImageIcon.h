//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSData;

@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon
{
    NSData *_imagePNGData;
}

@property (readonly, nonatomic) NSData *imagePNGData; // @synthesize imagePNGData=_imagePNGData;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithImagePNGData:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

