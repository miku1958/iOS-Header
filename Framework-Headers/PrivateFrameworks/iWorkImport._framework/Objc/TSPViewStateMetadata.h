//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

__attribute__((visibility("hidden")))
@interface TSPViewStateMetadata : TSPObject
{
    struct ViewStateMetadata _message;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)arg1;
- (struct ViewStateMetadata *)message;
- (void)saveToArchiver:(id)arg1;
- (long long)tsp_identifier;

@end

