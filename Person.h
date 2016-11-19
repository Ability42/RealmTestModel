//
//  Person.h
//  RealmTest
//
//  Created by Stepan Paholyk on 11/19/16.
//  Copyright © 2016 Stepan Paholyk. All rights reserved.
//

#import <Realm/Realm.h>
#import "Car.h"

@interface Person : RLMObject

@property NSString *name;
@property NSDate *birthdate;
@property RLMArray<Car*><Car> *cars;

//nano test

@end

// This protocol enables typed collections. i.e.:
// RLMArray<Person>
RLM_ARRAY_TYPE(Person)
