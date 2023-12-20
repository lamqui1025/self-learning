#ifndef __ANIMAL_H_
#define __ANIMAL_H_

#include <cstdint>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#pragma once
class Animal
{
public:
	/* Age */
	static constexpr uint8_t DEFAULT_AGE = 0;
	static constexpr uint8_t CHICKEN_LIFE_TIME = 15;
	static constexpr uint8_t CAT_LIFE_TIME = 20;
	static constexpr uint8_t DOG_LIFE_TIME = 25;
	static constexpr uint8_t PIG_LIFE_TIME = 22;

	/* Weight */
	static constexpr uint8_t DEFAULT_WEIGHT = 0;
	static constexpr uint8_t CHICKEN_MAX_WEIGHT = 2;
	static constexpr uint8_t CAT_MAX_WEIGHT = 4;
	static constexpr uint8_t DOG_MAX_WEIGHT = 7;
	static constexpr uint8_t PIG_MAX_WEIGHT = 10;

	static constexpr double CHICKEN_GAIN_WEIGHT = 0.2;
	static constexpr uint8_t CAT_GAIN_WEIGHT = 1;
	static constexpr uint8_t DOG_GAIN_WEIGHT = 1;
	static constexpr uint8_t PIG_GAIN_WEIGHT = 1;

	static constexpr uint8_t CHICKEN_FEED_CONSECUTIVE = 2;
	static constexpr uint8_t CAT_FEED_CONSECUTIVE = 3;
	static constexpr uint8_t DOG_FEED_CONSECUTIVE = 2;
	static constexpr uint8_t PIG_FEED_CONSECUTIVE = 1;

	/* Happy Index */
	static constexpr uint8_t DEFAULT_HAPPY_INDEX = 7;
	static constexpr uint8_t MIN_HAPPY_INDEX = 0;
	static constexpr uint8_t MAX_HAPPY_INDEX = 10;

	/* Intelligent index */
	static constexpr uint8_t DEFAULT_INTELLIGENT_INDEX = 0;
	static constexpr uint8_t MIN_INTELLIGENT_INDEX = 0;
	static constexpr uint8_t MAX_INTELLIGENT_INDEX = 10;

	/* Price */
	static constexpr uint8_t CHICKEN_SELL_PRICE = 2;	// USD per unit
	static constexpr uint8_t CAT_SELL_PRICE = 4;	// USD per unit
	static constexpr uint8_t DOG_STANDARD_SELL_PRICE = 5;	// USD per unit
	static constexpr uint8_t DOG_SMART_SELL_PRICE = 10;	//intelligent_index = 10; USD per unit
	static constexpr uint8_t PIG_SELL_PRICE = 1;	// USD per kg

	static constexpr uint8_t CHICKEN_BUY_PRICE = 2;	// USD/unit
	static constexpr uint8_t CAT_BUY_PRICE = 4;	// USD/unit
	static constexpr uint8_t DOG_BUY_PRICE = 5;	// USD/unit
	static constexpr uint8_t PIG_BUY_PRICE = 1;	// USD/kg

	static constexpr uint8_t CHICKEN_WEIGHT_TO_SELL = 2;	// weight = MAX_Weight
	static constexpr uint8_t CAT_AGE_TO_SELL = 10;	// age > 10
	static constexpr uint8_t DOG_WEIGHT_TO_SELL = 12;	// age > 12
	static constexpr uint8_t PIG_WEIGHT_TO_SELL = 5;	// age > 5

	/* Actions */
	const string CHICKEN_SOUND = "Bawk!";
	const string CAT_SOUND = "Meow!";
	const string DOG_SOUND = "Woof";
	const string PIG_SOUND = "Oink!";

	static constexpr uint8_t CHICKEN_SOUND_PER_DAY = 1;
	static constexpr uint8_t CAT_SOUND_PER_DAY = 1;
	static constexpr uint8_t DOG_SOUND_PER_DAY = 1;
	static constexpr uint8_t PIG_SOUND_PER_DAY = 1;

	static constexpr uint8_t CHICKEN_TIME_TO_SOUND = 6;
	static constexpr uint8_t CAT_TIME_TO_SOUND = 1;
	static constexpr uint8_t DOG_TIME_TO_SOUND = 20;
	static constexpr uint8_t PIG_TIME_TO_SOUND = 12; // If the Pig hungry

	static constexpr uint8_t CHICKEN_HAPPY_REDUCTION_BY_SOUND = 1;
	static constexpr uint8_t CAT_HAPPY_REDUCTION_BY_SOUND = 1;
	static constexpr uint8_t DOG_HAPPY_REDUCTION_BY_SOUND = 1;

	static constexpr uint8_t CHICKEN_CONDITION_REDUCE_BY_SOUND = 10;	// from Cats, Dogs, Pigs
	static constexpr uint8_t CAT_CONDITION_REDUCE_BY_SOUND = 15;	// from Dogs, Chickens
	static constexpr uint8_t DOG_CONDITION_REDUCE_BY_SOUND = 5;	// from Cats

	/* Eat */
	static constexpr uint8_t CHICKEN_EAT_A_DAY = 1;
	static constexpr uint8_t CAT_YOUNG_EAT_A_DAY = 0;   // AGE < 2
	static constexpr uint8_t CAT_EAT_A_DAY = 2; // AGE >= 2
	static constexpr uint8_t DOG_YOUNG_EAT_A_DAY = 0;   // AGE < 3;
	static constexpr uint8_t DOG_EAT_A_DAY = 3; // AGE >= 3;
	static constexpr uint8_t PIG_YOUNG_EAT_A_DAY = 0;   // AGE < 2
	static constexpr uint8_t PIG_EAT_A_DAY = 7; // AGE >= 2

	static constexpr uint8_t CHICKEN_SOUND_FOOD_UNIT = 1;
	static constexpr uint8_t CAT_SOUND_FOOD_UNIT = 1;
	static constexpr uint8_t DOG_SOUND_FOOD_UNIT = 1;
	static constexpr uint8_t PIG_SOUND_FOOD_UNIT = 1;

	static constexpr int randomC(int min, int max) {
		return min + (rand() % (max - min + 1));
	};

	/* Reproduce */
	static constexpr uint8_t CHICKEN_MIN_OF_CHILDREN = 1;
	static constexpr uint8_t CHICKEN_MAX_OF_CHILDREN = 3;
	static constexpr uint8_t CAT_NUMBER_OF_CHILDREN = 1;
	static constexpr uint8_t DOG_NUMBER_OF_CHILDREN = 1;
	static constexpr uint8_t PIG_MIN_OF_CHILDREN = 1;
	static constexpr uint8_t PIG_MAX_OF_CHILDREN = 2;

	static constexpr uint8_t CHICKEN_TIME_TO_REPRODUCE = 13;
	static constexpr uint8_t CAT_TIME_TO_REPRODUCE = 18;
	static constexpr uint8_t DOG_TIME_TO_REPRODUCE = 22;
	static constexpr uint8_t PIG_TIME_TO_REPRODUCE = 20;

	static constexpr uint8_t CHICKEN_CONDITION_TO_REPRODUCE[2] = { 2, 10 };   // {(0)Weight, (1)Happy index, (2)Intelligent index}
	static constexpr uint8_t CAT_CONDITION_TO_REPRODUCE[2] = { 4, 10 };
	static constexpr uint8_t DOG_CONDITION_TO_REPRODUCE[3] = { 7, 10, 10 };
	static constexpr uint8_t PIG_CONDITION_TO_REPRODUCE[1] = { 10 };

	/* Go out */
	static constexpr uint8_t TIME_GO_BACK_AFTER = 24;
	static constexpr uint8_t CHICKEN_TIME_GO_OUT[2] = { 4, 24 };
	static constexpr uint8_t DOG_TIME_GO_OUT[2] = { 4, 24 };

	static constexpr uint8_t GO_OUT_INCREASE_HAPPY = 2;
	static constexpr uint8_t MAX_TIME_GOING_OUT_A_DAY = 1;

	static constexpr uint8_t DECREASE_HAPPY_NOT_GOT_OUT = 1;
	static constexpr uint8_t UNHAPPY_BY_NOT_GO_OUT = 2;

	static constexpr uint8_t UNHAPPY_TO_CANNOT_EAT = 3; // HAPPY INDEX < 3 ANIMAL CANNOT EAT

	/* Die */
	static constexpr uint8_t UNHAPPY_VALUE_TO_DIE = 0;
	static constexpr uint8_t UNHAPPY_CONSECUTIVE_TO_DIE = 3;

	static constexpr uint8_t CHICKEN_DIE_SOUND = 4;
	static constexpr uint8_t CAT_DIE_SOUND = 4;
	static constexpr uint8_t DOG_DIE_SOUND = 4;
	static constexpr uint8_t PIG_DIE_SOUND = 4;

	/* Train */
	static constexpr uint8_t DOG_TRAIN_INCREASE_INTELLIGENT = 2;
	static constexpr uint8_t MAX_TIME_TRAINNING_A_DAY = 1;

private:
	// method
	static constexpr int randomC(int min, int max) {
		return min + (rand() % (max - min + 1));
	};
	// properties
	const char* mName;
	uint16_t mAge;

	double mWeight;
	int mFeedConsecutiveDays;

	bool mIsFed = false;	// the animal has been fed
	bool mCanEat = true;	// Not on PIG; pig always true
	bool mIsGoingOut;	// Not on PIG

	int mUnhappyConsecutiveToDie;	// Not on PIG
	int mUnhappyConsecutiveToNotEat;	//Not on PIG
	int mNotGoOutConsecutiveDays;	// Not on PIG

	uint8_t mHappyIndex; // Not on PIG
	uint8_t mIntelligentIndex; // Only Dog

	uint8_t mHearSoundInADay; // Not On PIG

	// Info and Status of the animal
	char* getName();
	uint16_t getAge();
	bool IsGoingOut();
	bool IsFull();
	bool CanEat();	// not on PIG
	void Train();	//	Only on Dog
	bool IsTrained();	//	Only on Dog

protected:
	virtual void Sound();
	virtual bool Eat();	// Pig doesn't need CanEat() condition
	virtual bool Reproduce();
	virtual bool GoOut();
	virtual void GoBack();
	virtual void Die();

};
#endif