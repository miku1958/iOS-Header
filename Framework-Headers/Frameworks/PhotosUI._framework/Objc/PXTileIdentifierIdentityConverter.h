//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTileIdentifierConverter-Protocol.h>

@class NSString;

@interface PXTileIdentifierIdentityConverter : NSObject <PXTileIdentifierConverter>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg1;
- (BOOL)transformTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2;

@end

