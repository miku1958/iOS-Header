//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDInfo-Protocol.h>

@class TSSPropertySet, TSSPropertySetChangeDetails;

@protocol TSDChangeableInfo <TSDInfo>

@property (readonly, nonatomic) Class editorClass;
@property (readonly, nonatomic) BOOL isUserModifiable;

- (void)beginCollectingChanges;
- (TSSPropertySetChangeDetails *)endCollectingChanges;
- (void)willChangeProperty:(int)arg1;

@optional
- (void)willChangeProperties:(TSSPropertySet *)arg1;
@end

