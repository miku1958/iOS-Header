//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/NSObject-Protocol.h>

@class SGList;

@protocol SGListDelegate <NSObject>
- (void)list:(SGList *)arg1 didAddItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)list:(SGList *)arg1 didRemoveItem:(id)arg2 atIndex:(unsigned long long)arg3;
@end

