//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@protocol AKAnnotationEditor;

@protocol AKAnnotationEditorDelegate <NSObject>

@optional
- (void)didHideAnnotationEditor:(id<AKAnnotationEditor>)arg1;
- (void)didShowAnnotationEditor:(id<AKAnnotationEditor>)arg1;
- (void)willHideAnnotationEditor:(id<AKAnnotationEditor>)arg1;
- (void)willShowAnnotationEditor:(id<AKAnnotationEditor>)arg1;
@end
