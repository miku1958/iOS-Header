//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class KNMacUILayout;

__attribute__((visibility("hidden")))
@interface KNMacArchivedUILayout : TSPObject
{
    KNMacUILayout *_uiLayout;
}

@property (readonly, nonatomic) KNMacUILayout *uiLayout; // @synthesize uiLayout=_uiLayout;

- (void).cxx_destruct;
- (id)initWithUILayout:(id)arg1 context:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end

