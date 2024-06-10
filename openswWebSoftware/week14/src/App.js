import React from 'react';
import "./profile.css";

function App() {
  const firstNumber = 10;
  const secondNumber = 5;

  function multiply(a, b) {
    return a * b;
  }

  const multiplyArrow = (a, b) => {
    return a * b;
  }

  const multiplyArrowShort = (a, b) => a * b;

  const basicResult = multiply(firstNumber, secondNumber);
  const arrowResult = multiplyArrow(firstNumber, secondNumber);
  const arrowShortResult = multiplyArrowShort(firstNumber, secondNumber);

  const profileImage = "profile.jpg"; // 이미지 파일이 public 폴더에 저장되어 있다고 가정
  const name = "Student. Yeon-Shin Kim";
  const department = "Department of Computer Science, CBNU";
  const email = "mil1445@chungbuk.ac.kr";

  return (
    <div className="App">
      <div>
        <h2>First number is {firstNumber}</h2>
        <h2>Second number is {secondNumber}</h2>
        <p><b>Basic function:</b> {basicResult}</p>
        <p><b>Arrow function:</b> {arrowResult}</p>
        <p><b>Skipped arrow function:</b> {arrowShortResult}</p>
      </div>
      <hr></hr>
      <div className="profile">
        <img src={profileImage} alt="Profile" style={{ width: '150px', borderRadius: '50%' }} />
        <h2>{name}</h2>
        <h3>{department}</h3>
        <p>Email: <a href={`mailto:${email}`}>{email}</a></p>
      </div>
    </div>
  );
}

export default App;