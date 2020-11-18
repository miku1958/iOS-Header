//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITraitCollection, WFModuleAppearance, WFParameterEditorHostingCell;
@protocol WFComponentNavigationContext;

@interface WFParameterEditorHostingCellContext : NSObject
{
    id<WFComponentNavigationContext> _navigationContext;
    WFParameterEditorHostingCell *_cell;
    WFModuleAppearance *_appearance;
    UITraitCollection *_traitCollection;
}

@property (strong, nonatomic) WFModuleAppearance *appearance; // @synthesize appearance=_appearance;
@property (weak, nonatomic) WFParameterEditorHostingCell *cell; // @synthesize cell=_cell;
@property (strong, nonatomic) id<WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property (strong, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;

- (void).cxx_destruct;

@end
