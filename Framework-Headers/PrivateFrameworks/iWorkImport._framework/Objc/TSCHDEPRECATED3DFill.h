//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

@class TSCH3DFillSetIdentifier, TSCH3DLightingModel, TSDFill;

__attribute__((visibility("hidden")))
@interface TSCHDEPRECATED3DFill : NSObject <TSSPropertyValueArchiving>
{
    TSDFill *mFill;
    TSCH3DLightingModel *mLightingModel;
    TSCH3DFillSetIdentifier *mIdentifier;
}

+ (id)instanceWithArchive:(const struct DEPRECATEDChart3DFillArchive *)arg1 unarchiver:(id)arg2;
- (id)convertToTSDFill;
- (void)dealloc;
- (id)initWithArchive:(const struct DEPRECATEDChart3DFillArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct DEPRECATEDChart3DFillArchive *)arg1 archiver:(id)arg2;

@end
