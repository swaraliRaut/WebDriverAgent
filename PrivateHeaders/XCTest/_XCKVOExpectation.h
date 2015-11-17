//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTestExpectation.h>

@class NSLock, NSString;

@interface _XCKVOExpectation : XCTestExpectation
{
    id _observedObject;
    NSString *_keyPath;
    id _expectedValue;
    CDUnknownBlockType _handler;
    BOOL _hasUnregistered;
    NSLock *_lock;
}

@property BOOL hasUnregistered; // @synthesize hasUnregistered=_hasUnregistered;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain) id expectedValue; // @synthesize expectedValue=_expectedValue;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain) id observedObject; // @synthesize observedObject=_observedObject;

- (void)cleanup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_safelyUnregister;
- (void)startObserving;
- (id)_initForTestCase:(id)arg1 withDescription:(id)arg2;

@end
