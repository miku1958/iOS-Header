//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PHImportServiceController : NSObject
{
    id _processInfoActivityToken;
    NSMutableArray *_runningImports;
}

@property (strong, nonatomic) id processInfoActivityToken; // @synthesize processInfoActivityToken=_processInfoActivityToken;
@property (strong, nonatomic) NSMutableArray *runningImports; // @synthesize runningImports=_runningImports;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5 atEnd:(CDUnknownBlockType)arg6;
- (void)runningImportCount:(CDUnknownBlockType)arg1;
- (void)runningImports:(CDUnknownBlockType)arg1;

@end

