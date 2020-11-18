//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

#import <ActionKit/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSArray, NSString, WFPhotoAccessResource;

@interface WFPhotoAlbumPickerParameter : WFEnumerationParameter <PHPhotoLibraryChangeObserver>
{
    BOOL _includesSmartAlbum;
    NSArray *_possibleStates;
    id _defaultSerializedRepresentation;
    WFPhotoAccessResource *_photoAccessResource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL includesSmartAlbum; // @synthesize includesSmartAlbum=_includesSmartAlbum;
@property (strong, nonatomic) WFPhotoAccessResource *photoAccessResource; // @synthesize photoAccessResource=_photoAccessResource;
@property (readonly) Class superclass;

+ (BOOL)hasPhotosAccess;
+ (id)referencedActionResourceClasses;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)resourceAvailabilityChanged;
- (void)setActionResources:(id)arg1;
- (id)sharedLibrary;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
