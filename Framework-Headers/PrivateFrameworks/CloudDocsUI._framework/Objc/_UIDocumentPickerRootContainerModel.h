//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerRootContainerModel : _UIDocumentPickerURLContainerModel
{
    BOOL _isObservingContainers;
}

- (id)_containerListDidChange;
- (id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (void)startMonitoringChanges;

@end

