//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKPencilAnnotationContainer-Protocol.h>

@class NSSet;
@protocol NSFastEnumeration;

@protocol TSKPencilAnnotationSupportedDocument <TSKPencilAnnotationContainer>
- (NSSet *)allPencilAnnotations;
- (BOOL)hasPencilAnnotations;
- (void)removePencilAnnotations;
- (void)removePencilAnnotationsFromDrawables:(id<NSFastEnumeration>)arg1;
@end

