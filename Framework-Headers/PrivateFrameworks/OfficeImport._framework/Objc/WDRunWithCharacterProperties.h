//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDRunWithCharacterProperties : WDRun
{
    WDCharacterProperties *mProperties;
}

@property (readonly, getter=isHidden) BOOL hidden;
@property (strong) WDCharacterProperties *properties; // @synthesize properties=mProperties;

- (void).cxx_destruct;
- (void)clearProperties;
- (id)initWithParagraph:(id)arg1;

@end

