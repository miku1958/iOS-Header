//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSCarPlayApplicationIcon-Protocol.h>

@class NSData, NSString;

@interface _SBSCarPlayApplicationInfo : NSObject <SBSCarPlayApplicationIcon>
{
    NSData *_iconImageData;
    double _iconImageScale;
    NSString *_localizedDisplayName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSData *iconImageData; // @synthesize iconImageData=_iconImageData;
@property (nonatomic) double iconImageScale; // @synthesize iconImageScale=_iconImageScale;
@property (strong, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
