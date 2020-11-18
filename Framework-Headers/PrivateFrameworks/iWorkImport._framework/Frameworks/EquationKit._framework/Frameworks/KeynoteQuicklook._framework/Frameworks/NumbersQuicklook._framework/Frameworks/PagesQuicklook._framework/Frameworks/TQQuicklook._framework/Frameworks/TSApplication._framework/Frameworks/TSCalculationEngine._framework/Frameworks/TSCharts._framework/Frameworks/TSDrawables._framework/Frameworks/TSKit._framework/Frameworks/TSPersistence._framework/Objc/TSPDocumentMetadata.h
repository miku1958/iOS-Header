//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@interface TSPDocumentMetadata : TSPObject
{
    BOOL _isInCollaborationModeForArchiving;
}

- (unsigned char)componentRequiredPackageIdentifier;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (void)takeSnapshotWithCollaborationMode:(BOOL)arg1;
- (long long)tsp_identifier;

@end
