//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PLDiagnosticsAgent-Protocol.h>

__attribute__((visibility("hidden")))
@interface PUPhotosDiagnosticsAgent : NSObject <PLDiagnosticsAgent>
{
}

+ (id)localDiagnosticsAgent;
- (id)_currentAssetIdentifierDescription;
- (id)_currentAssetViewModelDescription;
- (id)_descriptionOfUIState:(long long)arg1;
- (id)_viewModelDescription;
- (id)_windowRecursiveDescription;
- (void)captureDescriptionOfUIState:(long long)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
