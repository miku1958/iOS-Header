//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, OAXDrawingState;

__attribute__((visibility("hidden")))
@interface ODXState : OCXReadState
{
    CXNamespace *mODXDiagramNamespace;
    OAXDrawingState *mOfficeArtState;
}

@property (strong, nonatomic) CXNamespace *ODXDiagramNamespace; // @synthesize ODXDiagramNamespace=mODXDiagramNamespace;

- (void).cxx_destruct;
- (id)initWithOfficeArtState:(id)arg1;
- (id)officeArtState;
- (void)setupNSForXMLFormat:(int)arg1;

@end

